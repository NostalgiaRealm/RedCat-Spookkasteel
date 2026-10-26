/*
 * FUN_0040ff18 at 0040ff18
 * undefined __register FUN_0040ff18(int * param_1, int param_2, VARIANT * param_3)
 * Address ranges: 0040ff18-0040ff55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040ff18(int *param_1,int param_2,VARIANT *param_3)

{
  code *pcVar1;
  VARIANT *pVVar2;
  
  pVVar2 = *(VARIANT **)(param_2 + 0x10);
  if (*(VARIANT **)(param_2 + 0x10) == (VARIANT *)0x80000000) {
    pVVar2 = param_3;
  }
  pcVar1 = *(code **)(param_2 + 4);
  if (*(byte *)(param_2 + 7) != 0xff) {
    if (0xfd < *(byte *)(param_2 + 7)) {
      (**(code **)((int)(short)pcVar1 + *param_1))();
      return;
    }
    (*pcVar1)(param_1,pVVar2);
    return;
  }
  FUN_0040ff04(param_3,(VARIANTARG *)((int)param_1 + ((uint)pcVar1 & 0xffffff)));
  return;
}

