/*
 * FUN_0061aab9 at 0061aab9
 * undefined FUN_0061aab9(void)
 * Address ranges: 0061aab9-0061ab1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061aab9(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 local_7c [120];
  
  iVar1 = (*DAT_007101c4)((ushort)param_1 & 0x3ff | 0x400,1,local_7c,0x78);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0061ac37(local_7c);
  if ((param_1 != iVar1) && (param_2 != 0)) {
    sVar2 = FUN_0061ac70(DAT_007101b4);
    sVar3 = _strlen(DAT_007101b4);
    if (sVar2 == sVar3) {
      return 0;
    }
  }
  return 1;
}

