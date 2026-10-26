/*
 * FUN_0046a920 at 0046a920
 * undefined __register FUN_0046a920(int * param_1, int param_2)
 * Address ranges: 0046a920-0046a9a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046a920(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  UINT UVar3;
  undefined4 *in_FS_OFFSET;
  OLECHAR *pOVar4;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  OLECHAR local_c [2];
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c[0] = L'\0';
  local_c[1] = L'\0';
  puStack_1c = &LAB_0046a9a5;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_2;
  iVar1 = (**(code **)(*param_1 + 0x80))();
  uVar2 = FUN_004045c8(local_8);
  if (iVar1 < (int)uVar2) {
    pOVar4 = local_c;
    UVar3 = (**(code **)(*param_1 + 0x80))();
    FUN_004046d0(local_8,1,UVar3,pOVar4);
    FUN_00469acc((int)param_1,local_c,0);
  }
  else {
    FUN_00469acc((int)param_1,&local_8,0);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0046a9ac;
  puStack_1c = (undefined1 *)0x46a9a4;
  FUN_00404474((undefined4 *)local_c);
  return;
}

