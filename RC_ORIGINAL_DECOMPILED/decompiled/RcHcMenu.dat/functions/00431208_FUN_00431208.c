/*
 * FUN_00431208 at 00431208
 * undefined __register FUN_00431208(HDC param_1, int param_2, int param_3)
 * Address ranges: 00431208-00431236
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431208(HDC param_1,int param_2,int param_3)

{
  tagPOINT local_14;
  
  GetWindowOrgEx(param_1,&local_14);
  SetWindowOrgEx(param_1,local_14.x - param_2,local_14.y - param_3,(LPPOINT)0x0);
  return;
}

