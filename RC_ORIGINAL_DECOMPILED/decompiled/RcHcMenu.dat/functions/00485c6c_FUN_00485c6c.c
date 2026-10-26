/*
 * FUN_00485c6c at 00485c6c
 * undefined __register FUN_00485c6c(int param_1)
 * Address ranges: 00485c6c-00485d27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00485c6c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x184) != 0) {
    sVar1 = thunk_FUN_00479459(*(undefined4 *)(param_1 + 0x168));
    if (sVar1 != 0) {
      thunk_FUN_0047945f(*(undefined4 *)(param_1 + 0x168));
      uVar2 = FUN_00485d68(param_1,*(undefined4 **)(param_1 + 0x6c),*(undefined1 *)(param_1 + 0x8c))
      ;
      *(undefined4 *)(param_1 + 0x184) = uVar2;
      uVar3 = thunk_FUN_00479459(*(undefined4 *)(param_1 + 0x168));
      FUN_0047fe48(uVar3);
    }
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    sVar1 = thunk_FUN_00479459(*(undefined4 *)(param_1 + 0x168));
    if (sVar1 != 0) {
      thunk_FUN_0047945f(*(undefined4 *)(param_1 + 0x168));
      uVar2 = FUN_00485dfc(param_1);
      *(undefined4 *)(param_1 + 0x188) = uVar2;
      uVar3 = thunk_FUN_00479459(*(undefined4 *)(param_1 + 0x168));
      FUN_0047fe48(uVar3);
    }
  }
  return;
}

