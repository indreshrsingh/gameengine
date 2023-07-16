#pragma once

namespace Event {
    class Event {
        public:
            Event();
            virtual ~Event();
            void stopPropagation();
            bool isPropagationStopped();
        private:
            bool propagationStopped;
    };
}