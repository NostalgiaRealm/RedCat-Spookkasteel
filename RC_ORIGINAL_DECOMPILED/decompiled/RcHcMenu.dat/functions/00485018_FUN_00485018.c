/*
 * FUN_00485018 at 00485018
 * undefined __register FUN_00485018(int * param_1, int * param_2)
 * Address ranges: 00485018-00485224
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 127 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004851d2) */
/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 127 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00485018(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *unaff_EDI;
  int *in_FS_OFFSET;
  byte *pbVar6;
  undefined1 *local_28;
  undefined4 *local_24;
  undefined4 *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_24 = (undefined4 *)&stack0xfffffffc;
  local_8 = (undefined1 *)0x4;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != (undefined1 *)0x0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_00485225;
  pbVar6 = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffd4;
  puVar1 = (undefined4 *)&stack0xfffffffc;
  if ((5 < (byte)(*(char *)((int)param_1 + 0x8d) - 2U)) &&
     (puVar1 = (undefined4 *)&stack0xfffffffc, *(char *)((int)param_1 + 0x8d) != '\v')) {
    FUN_00406a48((undefined4 *)PTR_PTR_005722d4,(int *)&local_10);
    FUN_00466d84(local_10,(int)param_1);
    puVar1 = local_24;
  }
  local_24 = puVar1;
  if ((*(char *)((int)param_1 + 0x8d) == '\x04') &&
     ((iVar3 = (**(code **)(*param_2 + 0x74))(), iVar3 < 0 ||
      ((0 < param_1[0x78] && (uVar4 = FUN_00469420((int)param_2), (char)uVar4 == '\0')))))) {
    pbVar6 = (byte *)0x0;
    FUN_004692f8((int)param_2,(int *)&stack0xffffffe4);
    FUN_00406a48((undefined4 *)PTR_PTR_00572048,(int *)&stack0xffffffe0);
    FUN_00466e30(unaff_EDI,&stack0xffffffe8,0,(int)pbVar6);
  }
  FUN_0048493c(param_1,(int *)&local_8);
  iVar3 = (**(code **)(*param_2 + 0x74))();
  if (iVar3 < 1) {
    local_8 = local_8 + (uint)*(ushort *)(param_1 + 0x7a) + param_2[0x10];
    *local_8 = 0;
  }
  else {
    if (*(char *)((int)param_1 + 0x8d) == '\x05') {
      FUN_00406a48((undefined4 *)PTR_PTR_005722d4,(int *)&local_24);
      FUN_00466d84(local_24,(int)param_1);
    }
    if (((*(char *)((int)param_2 + 0x35) != '\0') && (*(char *)((int)param_1 + 0x8d) != '\x04')) &&
       (*(char *)((int)param_1 + 0x8d) != '\x06')) {
      iVar3 = 0;
      FUN_004692f8((int)param_2,(int *)&local_28);
      FUN_00406a48((undefined4 *)PTR_PTR_005723d4,(int *)&stack0xffffffd4);
      FUN_00466e30(pbVar6,&stack0xffffffe8,0,iVar3);
    }
    FUN_0046a050((int)param_2,0);
    if (*(char *)((int)param_2 + 0x36) != '\x03') {
      if (((*(char *)((int)param_1 + 0x1f2) != '\0') &&
          (cVar2 = (**(code **)(*param_2 + 0x78))(), cVar2 != '\0')) &&
         ((byte)(*(char *)((int)param_1 + 0x8d) - 2U) < 2)) {
        local_28 = (undefined1 *)(**(code **)(*param_2 + 0x74))();
        uVar5 = thunk_FUN_004799d6(param_1[0x5a]);
        FUN_0047fe48(uVar5);
      }
      local_28 = (undefined1 *)(**(code **)(*param_2 + 0x74))();
      pbVar6 = (byte *)param_1[0x5a];
      uVar5 = thunk_FUN_00479a2f(pbVar6);
      FUN_0047fe48(uVar5);
    }
  }
  if (2 < (byte)(*(char *)((int)param_1 + 0x8d) - 5U)) {
    (**(code **)(*param_1 + 0xac))(param_1,0,param_2);
  }
  *in_FS_OFFSET = (int)pbVar6;
  local_24 = (undefined4 *)&LAB_0048522c;
  local_28 = (undefined1 *)0x48521c;
  FUN_00403dd4((int *)&stack0xffffffd4,5);
  local_28 = (undefined1 *)0x485224;
  FUN_00403db0((int *)&local_10);
  return;
}

