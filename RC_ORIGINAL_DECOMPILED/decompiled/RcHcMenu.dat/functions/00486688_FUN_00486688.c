/*
 * FUN_00486688 at 00486688
 * undefined __register FUN_00486688(int * param_1, int param_2, undefined4 param_3, VARIANT * param_4, char * param_5)
 * Address ranges: 00486688-0048670f;00486717-0048671e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00486688(int *param_1,int param_2,undefined4 param_3,VARIANT *param_4,char *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;
  undefined1 *puStackY_24;
  undefined1 *puStackY_20;
  
  FUN_00404e28(param_4,(VARIANTARG *)PTR_DAT_00572068);
  puStackY_20 = (undefined1 *)0x4866ba;
  cVar1 = FUN_004863a0(param_1,param_2,param_3,0,0);
  if (cVar1 != '\0') {
    puStackY_20 = (undefined1 *)0x4866c8;
    FUN_00471390((int)param_1,5);
    puStackY_24 = &LAB_00486710;
    uStackY_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_28;
    puStackY_20 = &stack0xfffffffc;
    uVar2 = FUN_004730e4((int)param_1);
    (**(code **)(*param_1 + 0x80))(param_1,uVar2);
    FUN_00471f68((int)param_1,param_5,param_4);
    *in_FS_OFFSET = uStackY_28;
    puStackY_20 = (undefined1 *)0x486717;
    puStackY_24 = (undefined1 *)0x48670f;
    FUN_004713ac((int)param_1,1);
    return;
  }
  return;
}

