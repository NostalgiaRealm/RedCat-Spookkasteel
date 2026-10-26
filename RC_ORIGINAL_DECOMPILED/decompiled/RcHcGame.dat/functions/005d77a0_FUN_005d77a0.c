/*
 * FUN_005d77a0 at 005d77a0
 * undefined FUN_005d77a0(void)
 * Address ranges: 005d77a0-005d77f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005d77a0(int param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0xc) = param_3;
  iVar1 = FUN_005de510(param_2 - 1e-05);
  *(int *)(param_1 + 0x10) = iVar1;
  if (-1 < iVar1) {
    do {
      fVar3 = (float10)FUN_005de6b0();
      if (fVar3 < (float10)(param_2 - 1e-05)) {
        return;
      }
      uVar2 = *(int *)(param_1 + 0x10) - 1;
      *(uint *)(param_1 + 0x10) = uVar2;
    } while (uVar2 < 0x80000000);
  }
  return;
}

