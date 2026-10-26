/*
 * FUN_005d5b50 at 005d5b50
 * undefined FUN_005d5b50(void)
 * Address ranges: 005d5b50-005d5bb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_005d5b50(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  piVar3 = (int *)FUN_005d9790(DAT_006ceffc);
  piVar3[2] = param_2;
  piVar3[3] = param_3;
  uVar5 = (param_2 >> 0xf ^ param_2) % 0x3f1 + 1;
  piVar3[4] = uVar5;
  piVar4 = *(int **)(param_1 + uVar5 * 4);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)**(int **)(param_1 + 0xfc8);
    uVar1 = piVar4[4];
    while (uVar1 < uVar5) {
      piVar4 = (int *)*piVar4;
      uVar1 = piVar4[4];
    }
  }
  *piVar3 = (int)piVar4;
  puVar2 = (undefined4 *)piVar4[1];
  piVar3[1] = (int)puVar2;
  *puVar2 = piVar3;
  *(int **)(*piVar3 + 4) = piVar3;
  *(int **)(param_1 + uVar5 * 4) = piVar3;
  return piVar3;
}

