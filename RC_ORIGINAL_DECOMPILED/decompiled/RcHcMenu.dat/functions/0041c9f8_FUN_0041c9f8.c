/*
 * FUN_0041c9f8 at 0041c9f8
 * undefined __register FUN_0041c9f8(int * param_1, RECT * param_2)
 * Address ranges: 0041c9f8-0041ca2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c9f8(int *param_1,RECT *param_2)

{
  HBRUSH hbr;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,9);
  hbr = (HBRUSH)FUN_0041c34c(param_1[5]);
  FillRect((HDC)param_1[1],param_2,hbr);
  (**(code **)(*param_1 + 0xc))();
  return;
}

