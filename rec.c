task main()
{
	while (true)
{
  //
  // Skip to the last message received
  //
  while (bQueuedMsgAvailable())
  {
    word temp;
    ClearMessage();   // We’re ready to process the next message
    temp = message;   // Obtain the next message
  }
   nxtDisplayTextLine(3,"Received %d",message);
    	wait1Msec(300);

}
}
