/*
 * FUN_0042c6f8 at 0042c6f8
 * undefined __register FUN_0042c6f8(int * param_1, int param_2)
 * Address ranges: 0042c6f8-0042c738
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c6f8(int *param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 != param_1[0x7f]) {
    if ((param_1[0x7f] == 0) || (param_2 == 0)) {
      param_1[0x7f] = param_2;
      FUN_00435de4((int)param_1);
    }
    else {
      param_1[0x7f] = param_2;
      bVar1 = FUN_00438c84((int)param_1);
      if (bVar1) {
        FUN_0042c6b4(param_1);
      }
    }
  }
  return;
}

