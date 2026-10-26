/*
 * FUN_10002e60 at 10002e60
 * undefined4 __cdecl FUN_10002e60(int param_1, int param_2)
 * Address ranges: 10002e60-10002ee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10002e60(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_10038e64 != 0) {
    bVar2 = param_1 != 0;
    if (param_2 != 0) {
      bVar2 = bVar2 | 2;
    }
    local_8 = DAT_10027074;
    local_c = 0;
    local_10 = 0;
    local_4 = DAT_10027078;
    iVar1 = (**(code **)(*DAT_100274cc + 0x30))(DAT_100274cc,1,&local_10,bVar2);
    if (iVar1 != 0) {
      FUN_10001000(iVar1);
      FUN_100020f0(s_Viewport_clear_failed___s_100144d4);
      return 0;
    }
  }
  return 1;
}

