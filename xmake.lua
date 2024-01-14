add_rules("mode.debug", "mode.release")
add_rules("plugin.compile_commands.autoupdate", {outputdir = "build"})

set_languages("cxx17")

package("termox")
  add_deps("cmake")
  set_sourcedir(path.join(os.scriptdir(), "thirdparty/TermOx"))
  on_install(function (package)
      local configs = {}
      table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
      table.insert(configs, "-DBUILD_SHARED_LIBS=" .. (package:config("shared") and "ON" or "OFF"))
      import("package.tools.cmake").install(package, configs)
  end)
package_end()

add_requires("termox")

target("tusi_modules")
  set_kind("static")
  add_files("modules/pipeline/*.cc", "modules/pages/*.cc")
  add_packages("termox")

target("tusi_app")
  set_kind("binary")
  add_files("app/tusi_app.cc")
  add_deps("tusi_modules")
