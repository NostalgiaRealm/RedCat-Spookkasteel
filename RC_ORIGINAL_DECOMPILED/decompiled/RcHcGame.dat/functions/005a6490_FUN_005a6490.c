/*
 * FUN_005a6490 at 005a6490
 * undefined FUN_005a6490(void)
 * Address ranges: 005a6490-005a64c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_005a6490(int *param_1,int param_2)

{
  undefined4 in_EAX;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1[0xe]);
  if (((char)param_1[0xe] != '\0') && (-1 < *param_1)) {
    piVar1 = param_1 + 0x10;
    iVar2 = 0;
    do {
      if ((piVar1[-1] == param_2) && ((char)*piVar1 != '\0')) {
        return CONCAT31((int3)((uint)piVar1 >> 8),1);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < 0xe);
  }
  return (uint)piVar1 & 0xffffff00;
}

