/*
 * FUN_00516bd4 at 00516bd4
 * DWORD __register FUN_00516bd4(int param_1, undefined * param_2, LPBYTE param_3, undefined1 * param_4, DWORD param_5)
 * Address ranges: 00516bd4-00516c46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD FUN_00516bd4(int param_1,undefined *param_2,LPBYTE param_3,undefined1 *param_4,DWORD param_5)

{
  DWORD DVar1;
  LPCSTR lpValueName;
  LSTATUS LVar2;
  undefined4 uVar3;
  LPDWORD lpReserved;
  DWORD *lpType;
  DWORD *lpcbData;
  undefined *local_10;
  undefined1 local_c;
  DWORD local_8;
  
  local_8 = 0;
  lpcbData = &param_5;
  lpType = &local_8;
  lpReserved = (LPDWORD)0x0;
  lpValueName = FUN_004041f4(param_2);
  LVar2 = RegQueryValueExA(*(HKEY *)(param_1 + 4),lpValueName,lpReserved,lpType,param_3,lpcbData);
  if (LVar2 != 0) {
    local_c = 0xb;
    local_10 = param_2;
    uVar3 = FUN_0040cfe4((int)&DAT_005166ac,'\x01',(undefined4 *)PTR_PTR_00572628,0,&local_10);
    FUN_0040382c(uVar3);
  }
  DVar1 = param_5;
  uVar3 = FUN_00516798(local_8);
  *param_4 = (char)uVar3;
  return DVar1;
}

