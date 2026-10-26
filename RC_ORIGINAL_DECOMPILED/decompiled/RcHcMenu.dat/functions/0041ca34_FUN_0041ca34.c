/*
 * FUN_0041ca34 at 0041ca34
 * undefined __register FUN_0041ca34(int * param_1, RECT * param_2)
 * Address ranges: 0041ca34-0041ca6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041ca34(int *param_1,RECT *param_2)

{
  HBRUSH hbr;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,9);
  hbr = (HBRUSH)FUN_0041c34c(param_1[5]);
  FrameRect((HDC)param_1[1],param_2,hbr);
  (**(code **)(*param_1 + 0xc))();
  return;
}

