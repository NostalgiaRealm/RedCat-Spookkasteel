/*
 * FUN_00471040 at 00471040
 * undefined FUN_00471040(void)
 * Address ranges: 00471040-0047113a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_00471040(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628358;
  local_c = ExceptionList;
  uVar4 = 0;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_rcsource_RcTarg_00692de0,0x1e8);
  local_4 = 0;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x364) = 0;
  }
  else {
    uVar4 = 1;
    *(undefined1 *)(param_1 + 0x364) = 1;
    if (param_2 != *(int *)(param_1 + 0x368)) {
      *(int *)(param_1 + 0x368) = param_2;
      *(undefined4 *)(param_1 + 0x358) = 0x41c80000;
      *(undefined1 *)(param_1 + 0x35c) = 1;
      iVar2 = FUN_0060a6f2(param_2,0,&CAdamGO::RTTI_Type_Descriptor,
                           &CAdamActor::RTTI_Type_Descriptor,0);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x368) + 0x48))(local_18);
      }
      else {
        puVar3 = (undefined4 *)FUN_0049bc80(local_18);
      }
      *(undefined4 *)(param_1 + 0x36c) = *puVar3;
      *(undefined4 *)(param_1 + 0x370) = puVar3[1];
      uVar1 = puVar3[2];
      *(undefined4 *)(param_1 + 0x354) = 0;
      *(undefined4 *)(param_1 + 0x374) = uVar1;
    }
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return uVar4;
}

