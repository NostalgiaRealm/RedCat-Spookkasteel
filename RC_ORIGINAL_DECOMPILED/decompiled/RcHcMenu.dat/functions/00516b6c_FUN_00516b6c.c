/*
 * FUN_00516b6c at 00516b6c
 * undefined __register FUN_00516b6c(int param_1, undefined * param_2, BYTE * param_3, char param_4, DWORD param_5)
 * Address ranges: 00516b6c-00516bd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00516b6c(int param_1,undefined *param_2,BYTE *param_3,char param_4,DWORD param_5)

{
  DWORD dwType;
  LPCSTR lpValueName;
  LSTATUS LVar1;
  undefined4 uVar2;
  DWORD Reserved;
  BYTE *lpData;
  undefined *local_10;
  undefined1 local_c;
  BYTE *local_8;
  
  local_8 = param_3;
  dwType = FUN_00516768(param_4);
  Reserved = 0;
  lpData = local_8;
  lpValueName = FUN_004041f4(param_2);
  LVar1 = RegSetValueExA(*(HKEY *)(param_1 + 4),lpValueName,Reserved,dwType,lpData,param_5);
  if (LVar1 != 0) {
    local_c = 0xb;
    local_10 = param_2;
    uVar2 = FUN_0040cfe4((int)&DAT_005166ac,'\x01',(undefined4 *)PTR_PTR_00572358,0,&local_10);
    FUN_0040382c(uVar2);
  }
  return;
}

