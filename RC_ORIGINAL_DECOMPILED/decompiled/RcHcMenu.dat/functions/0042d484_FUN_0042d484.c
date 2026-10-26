/*
 * FUN_0042d484 at 0042d484
 * undefined __register FUN_0042d484(int param_1, int * param_2)
 * Address ranges: 0042d484-0042d525;0042d52d-0042d532
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042d484(int param_1,int *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  short sVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x42d498;
  FUN_0042d304(param_1);
  puStack_1c = &LAB_0042d526;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  uVar3 = EnumClipboardFormats(0);
  sVar7 = (short)uVar3;
  uVar1 = extraout_ECX;
  while( true ) {
    if (sVar7 == 0) {
      piVar6 = FUN_0040cfa8((int *)&DAT_00408ac4,'\x01',(undefined4 *)PTR_PTR_0057214c);
      FUN_0040382c(piVar6);
      *in_FS_OFFSET = uStack_20;
      puStack_18 = (undefined1 *)0x42d52d;
      puStack_1c = (undefined1 *)0x42d525;
      FUN_0042d2d8(param_1);
      return;
    }
    bVar2 = FUN_0041f0c0(&PTR_FUN_0041aa00,uVar3,uVar1);
    if (bVar2) break;
    uVar3 = EnumClipboardFormats(uVar3 & 0xffff);
    sVar7 = (short)uVar3;
    uVar1 = extraout_ECX_00;
  }
  pvVar4 = GetClipboardData(uVar3 & 0xffff);
  pvVar5 = GetClipboardData(9);
  FUN_0041efd0(param_2,uVar3,pvVar4,pvVar5);
  FUN_004038cc();
  return;
}

