/*
 * FUN_00485234 at 00485234
 * undefined __register FUN_00485234(int param_1, int param_2, int param_3, int * param_4)
 * Address ranges: 00485234-0048525d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00485234(int param_1,int param_2,int param_3,int *param_4)

{
  FUN_00403e04(param_4,*(undefined4 **)
                        (param_3 + (uint)*(ushort *)(param_1 + 0x1ee) + *(int *)(param_2 + 0x40) * 4
                        ));
  return;
}

