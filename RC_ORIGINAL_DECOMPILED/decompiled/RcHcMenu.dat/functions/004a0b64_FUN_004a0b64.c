/*
 * FUN_004a0b64 at 004a0b64
 * undefined __register FUN_004a0b64(int * param_1)
 * Address ranges: 004a0b64-004a0ba6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a0b64(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    if (param_1[0x12] != 0) {
      FUN_0040e4b4(param_1 + 0x12);
      (**(code **)(*param_1 + 0x6c))(param_1,param_1);
    }
  }
  return;
}

