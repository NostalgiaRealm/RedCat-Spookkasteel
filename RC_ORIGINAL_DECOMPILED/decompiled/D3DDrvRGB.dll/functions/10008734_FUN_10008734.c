/*
 * FUN_10008734 at 10008734
 * undefined __cdecl FUN_10008734(undefined1 * param_1, undefined1 * param_2, int param_3, undefined * param_4)
 * Address ranges: 10008734-10008781
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10008734(undefined1 *param_1,undefined1 *param_2,int param_3,undefined *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  for (; puVar2 = param_1, puVar3 = param_1, param_1 < param_2; param_2 = param_2 + -param_3) {
    while (puVar3 = puVar3 + param_3, puVar3 <= param_2) {
      iVar1 = (*(code *)param_4)(puVar3,puVar2);
      if (0 < iVar1) {
        puVar2 = puVar3;
      }
    }
    FUN_10008782(puVar2,param_2,param_3);
  }
  return;
}

