/*
 * FUN_005168c4 at 005168c4
 * undefined __register FUN_005168c4(int param_1, int param_2, char param_3)
 * Address ranges: 005168c4-005169c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005168c4(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  LPCSTR pCVar2;
  HKEY pHVar3;
  int iVar4;
  byte bVar5;
  DWORD *in_FS_OFFSET;
  DWORD Reserved;
  LPSTR lpClass;
  DWORD dwOptions;
  REGSAM RVar6;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *ppHVar7;
  DWORD *lpdwDisposition;
  DWORD DStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  DWORD local_14;
  LPSECURITY_ATTRIBUTES local_10;
  HKEY local_c;
  bool local_6;
  char local_5;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = (LPSECURITY_ATTRIBUTES)0x0;
  puStack_24 = &LAB_005169c9;
  DStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (DWORD)&DStack_28;
  local_5 = param_3;
  FUN_00403e48((int *)&local_10,param_2);
  uVar1 = FUN_00516754((char *)local_10);
  bVar5 = (byte)uVar1;
  if (bVar5 == 0) {
    FUN_00404278((int *)&local_10,1,1);
  }
  local_c = (HKEY)0x0;
  if ((local_5 == '\0') || (local_10 == (LPSECURITY_ATTRIBUTES)0x0)) {
    ppHVar7 = &local_c;
    RVar6 = *(REGSAM *)(param_1 + 0x18);
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    pCVar2 = FUN_004041f4((undefined *)local_10);
    pHVar3 = (HKEY)FUN_005168b0(param_1,bVar5);
    iVar4 = RegOpenKeyExA(pHVar3,pCVar2,(DWORD)lpSecurityAttributes,RVar6,ppHVar7);
  }
  else {
    lpdwDisposition = &local_14;
    ppHVar7 = &local_c;
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    RVar6 = *(REGSAM *)(param_1 + 0x18);
    dwOptions = 0;
    lpClass = (LPSTR)0x0;
    Reserved = 0;
    pCVar2 = FUN_004041f4((undefined *)local_10);
    pHVar3 = (HKEY)FUN_005168b0(param_1,bVar5);
    iVar4 = RegCreateKeyExA(pHVar3,pCVar2,Reserved,lpClass,dwOptions,RVar6,lpSecurityAttributes,
                            ppHVar7,lpdwDisposition);
  }
  local_6 = iVar4 == 0;
  if (local_6) {
    if ((*(int *)(param_1 + 4) != 0 & bVar5) != 0) {
      lpSecurityAttributes = local_10;
      FUN_004040f0((int *)&local_10,3);
    }
    FUN_0051688c(param_1,local_c,&local_10->nLength);
  }
  *in_FS_OFFSET = (DWORD)lpSecurityAttributes;
  FUN_00403db0((int *)&local_10);
  return;
}

