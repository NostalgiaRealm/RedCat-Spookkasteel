/*
 * FUN_005d5c10 at 005d5c10
 * undefined FUN_005d5c10(void)
 * Address ranges: 005d5c10-005d5c56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_005d5c10(int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (param_2 >> 0xf ^ param_2) % 0x3f1;
  piVar1 = *(int **)(param_1 + 4 + uVar3 * 4);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[4];
    while (iVar2 == uVar3 + 1) {
      if (piVar1[2] == param_2) {
        if (param_3 == (int *)0x0) {
          return piVar1;
        }
        *param_3 = piVar1[3];
        return piVar1;
      }
      piVar1 = (int *)*piVar1;
      iVar2 = piVar1[4];
    }
  }
  return (int *)0x0;
}

