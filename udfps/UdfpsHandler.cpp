/*
 * SPDX-FileCopyrightText: The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#define LOG_TAG "UdfpsHandler.hormoz"

#include "UdfpsHandler.h"

#include <android-base/logging.h>

class HormozUdfpsHandler : public UdfpsHandler {
  public:
    void init(fingerprint_device_t* device) override {}
    void onFingerDown(uint32_t x, uint32_t y, float minor, float major) override {}
    void onFingerUp() override {}
    void onAcquired(int32_t result, int32_t vendorCode) override {}
    void cancel() override {}
};

static UdfpsHandler* create() {
    return new HormozUdfpsHandler();
}

static void destroy(UdfpsHandler* handler) {
    delete handler;
}

extern "C" UdfpsHandlerFactory UDFPS_HANDLER_FACTORY = {
    .create = create,
    .destroy = destroy,
};
