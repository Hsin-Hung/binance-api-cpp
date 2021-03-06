/*
    Binance API Wrapper for C++
    
    Copyright (c) 2022 Hsin-Hung <https://github.com/Hsin-Hung>

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

            http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 */

#ifndef FIAT_H
#define FIAT_H
#include "fiatUtils.h"
#include "binanceAPI.h"

namespace Binance
{

    class Fiat : public BinanceAPI
    {
    public:
        Fiat() : BinanceAPI(){};

        // https://binance-docs.github.io/apidocs/spot/en/#get-fiat-deposit-withdraw-history-user_data
        void GetDepositWithdrawHistory(FiatHistoryParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#get-fiat-payments-history-user_data
        void GetPaymentHistory(FiatHistoryParams params, json &result);
    };
}

#endif