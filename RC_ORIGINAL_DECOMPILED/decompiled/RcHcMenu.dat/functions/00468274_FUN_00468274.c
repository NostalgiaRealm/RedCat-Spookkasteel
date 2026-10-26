/*
 * FUN_00468274 at 00468274
 * undefined __register FUN_00468274(int * param_1, undefined4 param_2)
 * Address ranges: 00468274-0046829a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468274(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x84))();
  if (cVar1 == '\0') {
    FUN_00468200(param_1);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return;
}

