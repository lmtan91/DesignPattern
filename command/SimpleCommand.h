/*
 * SimpleCommand.h
 *
 *  Created on: Mar 16, 2017
 *      Author: lmtan91
 */

#ifndef __SIMPLECOMMAND_H__
#define __SIMPLECOMMAND_H__

template <class Receiver>
class SimpleCommand : public Command
{
public:
   typedef void(Receiver::* Action)();

   SimpleCommand(Receiver* r, Action a) :
      mReceiver(r), mAction(a) {}

   virtual void Execute();

private:
   Action mAction;
   Receiver* mReceiver;
};
template <class Receiver>
void SimpleCommand<Receiver>::Execute()
{
   (mReceiver->*mAction)();
}
#endif /* __SIMPLECOMMAND_H__ */
