/*
 * FUN_0051e92c at 0051e92c
 * undefined __register FUN_0051e92c(int * param_1)
 * Address ranges: 0051e92c-0051e968
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051e92c(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0051e1b8(param_1);
  if (*(int *)(iVar2 + 0x274) != 0) {
    iVar2 = FUN_0051e1b8(param_1);
    bVar1 = FUN_00438c84(*(int *)(iVar2 + 0x274));
    if (bVar1) {
      (**(code **)(*param_1 + 0xbc))();
    }
  }
  return;
}

