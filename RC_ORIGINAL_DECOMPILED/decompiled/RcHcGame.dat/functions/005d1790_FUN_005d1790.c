/*
 * FUN_005d1790 at 005d1790
 * undefined FUN_005d1790(void)
 * Address ranges: 005d1790-005d17e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005d1790(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x114);
  while (-1 < param_2) {
    piVar1 = (int *)(iVar2 + param_2 * 0x2c);
    fVar3 = (float10)FUN_005d17f0();
    if ((float10)0.0 <= fVar3) {
      param_2 = *piVar1;
    }
    else {
      param_2 = piVar1[1];
    }
  }
  return -1 - param_2;
}

