/*
 * FUN_005e0590 at 005e0590
 * undefined FUN_005e0590(void)
 * Address ranges: 005e0590-005e05bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e0590(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = 0;
  puVar3 = (undefined4 *)param_1[1];
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      puVar4 = param_2;
      puVar5 = puVar3;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar3 = puVar3 + 0xc;
    } while (iVar1 < *param_1);
  }
  return;
}

