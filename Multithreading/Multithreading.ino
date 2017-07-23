#include <StaticThreadController.h>
#include <Thread.h>
#include <ThreadController.h>

void setup() {
  
// or, if initializing a pointer
Thread* mainMelodyThread = new Thread();
mainMelodyThread->enabled = true; // Default enabled value is true
mainMelodyThread->setInterval(50); // Setts the wanted interval to be 10ms
Thread* slaveMelodyThread = new Thread();

/*
  This is useful for debugging
  (Thread Name is disabled by default, to use less memory)
  (Enable it by definint USE_THREAD_NAMES on 'Thread.h')
*/
//mainMelodyThread->ThreadName = "mainMelodyThread";
// This will set the callback of the Thread: "What should I run"?
mainMelodyThread->onRun(MainMelody); // callback_function is the name of the function

slaveMelodyThread->enabled = true; // Default enabled value is true
slaveMelodyThread->setInterval(50); // Setts the wanted interval to be 10ms
/*
  This is useful for debugging
  (Thread Name is disabled by default, to use less memory)
  (Enable it by definint USE_THREAD_NAMES on 'Thread.h')
*/
//slaveMelodyThread->ThreadName = "slaveMelodyThread";
// This will set the callback of the Thread: "What should I run"?
slaveMelodyThread->onRun(SlaveMelody); // callback_function is the name of the function
ThreadController controller = ThreadController();
controller.add(mainMelodyThread);
controller.add(slaveMelodyThread);
}

void loop() {
  // put your main code here, to run repeatedly:
  controller.run();
}
SlaveMelody(){
  tone(9, 440, 500);
}
SlaveMelody(){
  tone(9, 440, 500);
}

