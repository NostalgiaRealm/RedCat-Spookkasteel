/*
 * FUN_00444f34 at 00444f34
 * undefined __register FUN_00444f34(int * param_1)
 * Address ranges: 00444f34-00444f5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00444f34(int *param_1)

{
  (**(code **)(*param_1 + 0x38))(param_1,0,0,0);
  if ((HWND)param_1[0xb] != (HWND)0x0) {
    SendMessageA((HWND)param_1[0xb],0xb015,0,0);
  }
  return;
}

