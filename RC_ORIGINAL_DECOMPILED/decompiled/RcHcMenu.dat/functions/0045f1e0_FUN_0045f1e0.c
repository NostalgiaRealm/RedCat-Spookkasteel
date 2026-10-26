/*
 * FUN_0045f1e0 at 0045f1e0
 * undefined __register FUN_0045f1e0(DWORD param_1, VARIANTARG * param_2, int param_3, char param_4)
 * Address ranges: 0045f1e0-0045f280;0045f283-0045f2a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045f1e0(DWORD param_1,VARIANTARG *param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_24 = &LAB_0045f2a5;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  local_8 = param_3;
  if (param_1 == 0x80020009) {
    DVar5 = *(DWORD *)((int)&param_2[1].n1 + 0xc);
    puStack_20 = &stack0xfffffffc;
    FUN_00403ff8((int *)&local_c,(LPCWSTR)(param_2->n1).decVal.Hi32);
    puVar4 = local_c;
    FUN_00403ff8((int *)&local_10,*(LPCWSTR *)((int)&param_2->n1 + 0xc));
    iVar2 = *(int *)&param_2[1].n1;
    puVar3 = local_10;
    FUN_00403ff8((int *)&local_14,*(LPCWSTR *)((int)&param_2->n1 + 8));
    uVar1 = FUN_0045ea68((int *)&DAT_0045e8ec,'\x01',local_14,iVar2,puVar3,puVar4,DVar5);
    if (param_4 != '\0') {
      FUN_00404960(param_2,"\x0e\ftagEXCEPINFO ");
    }
  }
  else {
    puVar4 = (undefined4 *)0x0;
    uVar1 = FUN_0045e998((int *)&DAT_0045e890,'\x01',0,0,param_1);
  }
  if (local_8 != 0) {
    FUN_0040382c(uVar1);
    return;
  }
  FUN_0040382c(uVar1);
  *in_FS_OFFSET = puVar4;
  puStack_28 = &LAB_0045f2ac;
  FUN_00403dd4((int *)&local_14,3);
  return;
}

