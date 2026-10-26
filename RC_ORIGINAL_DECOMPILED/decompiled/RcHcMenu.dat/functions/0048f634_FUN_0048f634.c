/*
 * FUN_0048f634 at 0048f634
 * undefined __register FUN_0048f634(int * param_1, byte * param_2)
 * Address ranges: 0048f634-0048f6ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048f634(int *param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_d;
  byte *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  puStack_24 = &LAB_0048f6cf;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_00492440(*(int **)(param_1[9] + 4),param_2);
  if (((*(byte *)(iVar1 + 0x18) & 0x40) != 0) && ((*(byte *)(local_8[9] + 8) & 0x10) == 0)) {
    local_1c = *(undefined4 *)(local_8[9] + 0xc);
    local_18 = 0xb;
    FUN_0040a894((byte *)
                 "Sortorder-orderby fields of \"%s\" may not contain volatile props  \r\nunless this sortorder has the flag SO_NO_INDEX."
                 ,&local_1c,0,&local_14);
    FUN_00403d94(local_14);
  }
  uVar2 = FUN_0048f1c4(local_8,local_c);
  local_d = (undefined1)uVar2;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0048f6d6;
  puStack_24 = (undefined1 *)0x48f6ce;
  FUN_00403db0(&local_14);
  return;
}

