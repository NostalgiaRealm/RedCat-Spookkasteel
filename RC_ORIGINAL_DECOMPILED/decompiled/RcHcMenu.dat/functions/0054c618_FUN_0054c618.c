/*
 * FUN_0054c618 at 0054c618
 * undefined __register FUN_0054c618(int param_1, undefined4 param_2)
 * Address ranges: 0054c618-0054c749
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54c038 slot published:FormCreate for TfrmAgent. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54c038 slot
   published:FormCreate for TfrmAgent. Original bytes unchanged; names and types still inferred. */

void FUN_0054c618(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (uint *)0x0;
  puStack_18 = &LAB_0054c74a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  piVar2 = FUN_004d8ef0((int *)&PTR_FUN_004d8b80,'\x01',0);
  *(int **)(local_8 + 0x318) = piVar2;
  FUN_004e15b8(*(int **)(local_8 + 0x318),'\x01');
  FUN_004d9038(*(int **)(local_8 + 0x318),'\x05');
  FUN_00406a48(&PTR_DAT_0054c610,(int *)&local_10);
  FUN_004e1e10(*(int **)(local_8 + 0x318),local_10);
  FUN_004e223c(*(int **)(local_8 + 0x318),0x8c);
  iVar1 = *(int *)(local_8 + 0x318);
  *(int *)(iVar1 + 0x30c) = local_8;
  *(undefined1 **)(iVar1 + 0x308) = &LAB_0054d1c8;
  uVar3 = FUN_00403064((int *)&PTR_FUN_004b0b7c,'\x01',extraout_ECX);
  *(undefined4 *)(local_8 + 0x31c) = uVar3;
  *(undefined1 *)(local_8 + 0x328) = 1;
  FUN_00431b6c(*(int *)(local_8 + 0x2d4),'\t');
  *(undefined4 *)(local_8 + 0x314) = 0xffffffff;
  *(undefined1 *)(local_8 + 0x2e8) = 1;
  *(undefined1 *)(local_8 + 0x348) = 0;
  if (*(char *)(local_8 + 0x348) == '\0') {
    FUN_0054d210(local_8,1);
  }
  else {
    FUN_0054d210(local_8,0);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0054c751;
  puStack_18 = (undefined1 *)0x54c749;
  FUN_00403db0((int *)&local_10);
  return;
}

