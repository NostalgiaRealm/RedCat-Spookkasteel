/*
 * FUN_00429558 at 00429558
 * undefined __register FUN_00429558(int * param_1, int param_2)
 * Address ranges: 00429558-00429585
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429558(int *param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 != param_1[0x7c]) {
    param_1[0x7c] = param_2;
    bVar1 = FUN_00438c84((int)param_1);
    if (bVar1) {
      (**(code **)(*param_1 + 0xb4))(param_1,param_2);
    }
  }
  return;
}

