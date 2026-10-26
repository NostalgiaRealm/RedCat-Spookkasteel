/*
 * FUN_004297e0 at 004297e0
 * undefined __register FUN_004297e0(int * param_1, char * param_2, int param_3)
 * Address ranges: 004297e0-00429869
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004297e0(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_c;
  
  puStack_20 = (undefined1 *)0x4297fa;
  iVar1 = (**(code **)(*param_1 + 0xbc))();
  puStack_20 = (undefined1 *)0x429806;
  local_c = (**(code **)(*param_1 + 0xb8))();
  puStack_20 = (undefined1 *)0x429810;
  iVar2 = FUN_00432688((int)param_1);
  puStack_20 = (undefined1 *)0x429816;
  piVar3 = FUN_0040a360(iVar2 + 1);
  puStack_24 = &LAB_0042986a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar2 = FUN_0040a374((int)piVar3);
  FUN_00432698((int)param_1,piVar3,iVar2);
  if (param_3 <= local_c) {
    local_c = param_3 + -1;
  }
  FUN_0040a198(param_2,(char *)((int)piVar3 + iVar1),local_c);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00429871;
  puStack_24 = (undefined1 *)0x429869;
  FUN_0040a3ac((int)piVar3);
  return;
}

