/*
 * FUN_0060e796 at 0060e796
 * undefined FUN_0060e796(void)
 * Address ranges: 0060e796-0060e866
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0060e796(void)

{
  uint uVar1;
  BOOL BVar2;
  byte *pbVar3;
  _INPUT_RECORD local_20;
  DWORD local_c;
  DWORD local_8;
  
  if (DAT_006b2c50 != 0xffffffff) {
    uVar1 = DAT_006b2c50 & 0xff;
    DAT_006b2c50 = 0xffffffff;
    return uVar1;
  }
  if (DAT_006b3b80 == (HANDLE)0xffffffff) {
    return 0xffffffff;
  }
  if (DAT_006b3b80 == (HANDLE)0xfffffffe) {
    FUN_0061cbc8();
  }
  GetConsoleMode(DAT_006b3b80,&local_c);
  SetConsoleMode(DAT_006b3b80,0);
  do {
    do {
      BVar2 = ReadConsoleInputA(DAT_006b3b80,&local_20,1,&local_8);
      if ((BVar2 == 0) || (local_8 == 0)) {
        uVar1 = 0xffffffff;
        goto LAB_0060e855;
      }
    } while ((local_20.EventType != 1) || (local_20.Event.KeyEvent.bKeyDown == 0));
    uVar1 = (uint)(byte)local_20.Event.MouseEvent.dwControlKeyState._2_1_;
    if (uVar1 != 0) goto LAB_0060e855;
    pbVar3 = (byte *)FUN_0060e925(&local_20.Event);
  } while (pbVar3 == (byte *)0x0);
  uVar1 = (uint)*pbVar3;
  DAT_006b2c50 = (uint)pbVar3[1];
LAB_0060e855:
  SetConsoleMode(DAT_006b3b80,local_c);
  return uVar1;
}

