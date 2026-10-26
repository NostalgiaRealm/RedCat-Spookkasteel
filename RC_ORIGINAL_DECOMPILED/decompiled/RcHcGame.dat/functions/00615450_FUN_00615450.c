/*
 * FUN_00615450 at 00615450
 * undefined FUN_00615450(void)
 * Address ranges: 00615450-0061548b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00615450(int param_1,int param_2)

{
  int iVar1;
  
  if (((byte)*(undefined4 *)(param_1 + 4) & 0xf) != 3) {
    iVar1 = FUN_00615028();
    if (iVar1 == 0) {
      *(uint *)(param_1 + 4) =
           (*(uint *)(param_1 + 4) ^ (*(int *)(param_2 + 4) << 0x1c) >> 0x1c) & 0xf ^
           *(uint *)(param_1 + 4);
    }
  }
  return param_1;
}

