/*
 * FUN_100014d0 at 100014d0
 * undefined FUN_100014d0(void)
 * Address ranges: 100014d0-1000152b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100014d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    do {
      while( true ) {
        iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x80))(*(int **)(param_1 + 0xc),0);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          return 1;
        }
        if (iVar1 != -0x7789fe3e) break;
        iVar1 = FUN_10001480(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
    } while (iVar1 == -0x7789fde4);
  }
  return 0;
}

