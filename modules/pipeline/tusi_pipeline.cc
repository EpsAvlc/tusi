#include "tusi_pipeline.h"

#include <iostream>

#include "tusi_pipeline_impl.h"

namespace tusi {

TusiPipeline::TusiPipeline() { p_impl_ = new TusiPipelineImpl(); }

void TusiPipeline::run() { p_impl_->run(); };

TusiPipeline::~TusiPipeline() { delete p_impl_; }

}  // namespace tusi
