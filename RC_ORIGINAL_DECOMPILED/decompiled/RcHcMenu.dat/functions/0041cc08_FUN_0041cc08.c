/*
 * FUN_0041cc08 at 0041cc08
 * undefined4 __register FUN_0041cc08(int * param_1)
 * Address ranges: 0041cc08-0041cc33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0041cc08(int *param_1)

{
  HDC hdc;
  undefined4 uVar1;
  tagPOINT *lppoint;
  tagPOINT local_10;
  
  lppoint = &local_10;
  uVar1 = 0;
  if ((*(byte *)(param_1 + 0x15) & 0x80) != 0) {
    hdc = (HDC)FUN_0041cf6c(param_1);
    GetWindowOrgEx(hdc,lppoint);
    if (local_10.x != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

