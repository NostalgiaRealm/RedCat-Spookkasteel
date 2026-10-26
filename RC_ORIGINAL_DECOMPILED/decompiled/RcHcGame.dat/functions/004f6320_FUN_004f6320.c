/*
 * FUN_004f6320 at 004f6320
 * undefined FUN_004f6320(void)
 * Address ranges: 004f6320-004f64bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004f63be) */
/* WARNING: Removing unreachable block (ram,0x004f63c8) */
/* WARNING: Removing unreachable block (ram,0x004f63d2) */
/* WARNING: Removing unreachable block (ram,0x004f63cc) */
/* WARNING: Removing unreachable block (ram,0x004f642e) */
/* WARNING: Removing unreachable block (ram,0x004f6438) */
/* WARNING: Removing unreachable block (ram,0x004f6442) */
/* WARNING: Removing unreachable block (ram,0x004f643c) */

void __fastcall FUN_004f6320(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628);
  local_4 = 0;
  FUN_00568080();
  FUN_00568080();
  iVar2 = -1;
  pcVar3 = s_No_world_loaded_0069c658;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_No_world_loaded_0069c658);
  local_4._0_1_ = 1;
  FUN_00567990();
  local_4._0_1_ = 0;
  iVar2 = -1;
  pcVar3 = s_No_world_loaded_0069c658;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_No_world_loaded_0069c658);
  local_4._0_1_ = 2;
  FUN_00567990();
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  FUN_005669d0();
  FUN_004f5750();
  FUN_004f6200();
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_005b8460();
    FUN_004f6300();
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

