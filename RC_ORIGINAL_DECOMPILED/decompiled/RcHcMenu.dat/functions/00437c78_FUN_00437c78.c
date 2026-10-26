/*
 * FUN_00437c78 at 00437c78
 * undefined __register FUN_00437c78(int * param_1)
 * Address ranges: 00437c78-00437cab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437c78(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  RemovePropA((HWND)param_1[0x53],(LPCSTR)(uint)DAT_0057375a);
  RemovePropA((HWND)param_1[0x53],(LPCSTR)(uint)DAT_00573758);
  return;
}

