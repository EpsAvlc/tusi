#include "tusi_pipeline_impl.h"

#include "../pages/home_page.h"

namespace tusi {
void TusiPipelineImpl::run() {
  ox::System{ox::Mouse_mode::Drag}.run<HomePage>();
}
}  // namespace tusi
