/*
 * FUN_0041c97c at 0041c97c
 * undefined __register FUN_0041c97c(int * param_1, RECT * param_2)
 * Address ranges: 0041c97c-0041c9a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c97c(int *param_1,RECT *param_2)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,9);
  DrawFocusRect((HDC)param_1[1],param_2);
  (**(code **)(*param_1 + 0xc))();
  return;
}

