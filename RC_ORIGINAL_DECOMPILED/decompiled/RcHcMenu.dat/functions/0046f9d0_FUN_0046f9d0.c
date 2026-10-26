/*
 * FUN_0046f9d0 at 0046f9d0
 * undefined __register FUN_0046f9d0(int param_1, byte param_2)
 * Address ranges: 0046f9d0-0046fa60;0046fa7a-0046fa9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046f9d0(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x46f9e4;
  iVar1 = FUN_0046f940(param_1);
  *(byte *)(iVar1 + 0x30) = param_2;
  puStack_18 = (undefined1 *)0x46f9ef;
  piVar2 = FUN_0047052c(param_1);
  if (piVar2 != (int *)0x0) {
    puStack_18 = (undefined1 *)0x46f9ff;
    piVar2 = FUN_0047052c(param_1);
    if ((*(byte *)(piVar2 + 8) & 0x10) != 0) {
      puStack_18 = (undefined1 *)0x46fa11;
      iVar1 = FUN_0046f940(param_1);
      puStack_18 = (undefined1 *)0x46fa16;
      uVar3 = FUN_0046f970(iVar1);
      if ((char)uVar3 == '\0') {
        iVar1 = *(int *)(&DAT_0057076c + (uint)param_2 * 4);
        if (iVar1 != 10) {
          puStack_1c = &LAB_0046fa61;
          uStack_20 = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_20;
          puStack_18 = &stack0xfffffffc;
          iVar4 = FUN_0046f940(param_1);
          iVar5 = FUN_0046f940(param_1);
          FUN_0040503c((VARIANT *)(iVar5 + 0x18),(VARIANTARG *)(iVar4 + 0x18),iVar1);
          *in_FS_OFFSET = uStack_20;
          return;
        }
        puStack_18 = (undefined1 *)0x46fa82;
        iVar1 = FUN_0046f940(param_1);
        puStack_18 = (undefined1 *)0x46fa87;
        FUN_00470514(iVar1);
        return;
      }
    }
  }
  puStack_18 = (undefined1 *)0x46fa91;
  iVar1 = FUN_0046f940(param_1);
  puStack_18 = (undefined1 *)0x46fa96;
  FUN_00470514(iVar1);
  return;
}

