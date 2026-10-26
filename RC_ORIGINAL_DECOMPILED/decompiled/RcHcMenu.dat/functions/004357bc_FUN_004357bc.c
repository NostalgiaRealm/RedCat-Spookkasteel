/*
 * FUN_004357bc at 004357bc
 * undefined __register FUN_004357bc(int param_1, int param_2)
 * Address ranges: 004357bc-004357fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004357bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0043579c(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_00435760(param_1,iVar3);
      (**(code **)(iVar2 + 0x28))(*(undefined4 *)(iVar2 + 0x2c),param_2);
      if (*(int *)(param_2 + 0xc) != 0) {
        return;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

