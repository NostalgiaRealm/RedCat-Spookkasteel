/*
 * FUN_0045163c at 0045163c
 * undefined __register FUN_0045163c(int param_1, int param_2)
 * Address ranges: 0045163c-004516f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045163c(int param_1,int param_2)

{
  char *pcVar1;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  UINT *in_FS_OFFSET;
  undefined1 uVar4;
  undefined1 uVar5;
  UINT UVar6;
  UINT UStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined *local_10c;
  byte local_108 [256];
  undefined *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10c = (undefined *)0x0;
  local_8 = (undefined *)0x0;
  puStack_11c = &LAB_004516f7;
  UStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = (UINT)&UStack_120;
  FUN_00403e48((int *)&local_8,*(int *)(param_2 + 4));
  uVar4 = 0;
  uVar5 = local_8 == (undefined *)0x0;
  if (!(bool)uVar5) {
    pcVar1 = FUN_00409f04(local_8);
    FUN_00402e54((char *)local_108,pcVar1);
    FUN_00402c08(local_108,&DAT_00451704);
    if (!(bool)uVar4 && !(bool)uVar5) {
      FUN_00404038((int *)&local_8,(undefined4 *)&DAT_00451710);
    }
  }
  UVar6 = 0x10;
  FUN_00450eb0(param_1,(int *)&local_10c);
  pCVar2 = FUN_004041f4(local_10c);
  pCVar3 = FUN_004041f4(local_8);
  FUN_004514e4(param_1,pCVar3,pCVar2,UVar6);
  *in_FS_OFFSET = UVar6;
  puStack_11c = &LAB_004516fe;
  UStack_120 = 0x4516ee;
  FUN_00403db0((int *)&local_10c);
  UStack_120 = 0x4516f6;
  FUN_00403db0((int *)&local_8);
  return;
}

