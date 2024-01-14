#ifndef __TUSI_MODULES_TUSI_PIPELINE_H__
#define __TUSI_MODULES_TUSI_PIPELINE_H__

#include <memory>

namespace tusi {
class TusiPipelineImpl;

class TusiPipeline {
 public:
  TusiPipeline();

  void run();

  ~TusiPipeline();

 private:
  TusiPipelineImpl* p_impl_;
};
}  // namespace tusi
#endif
