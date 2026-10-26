/*
 * FUN_0046bafc at 0046bafc
 * undefined __register FUN_0046bafc(int param_1, char param_2, undefined4 param_3)
 * Address ranges: 0046bafc-0046bb19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 34 for TBooleanField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 34 for
   TBooleanField. Original bytes unchanged; names and types still inferred. */

void FUN_0046bafc(int param_1,char param_2,undefined4 param_3)

{
  undefined4 local_4;
  
  local_4._2_2_ = (ushort)((uint)param_3 >> 0x10);
  if (param_2 == '\0') {
    local_4 = (uint)local_4._2_2_ << 0x10;
  }
  else {
    local_4 = CONCAT22(local_4._2_2_,1);
  }
  FUN_00469acc(param_1,&local_4,CONCAT31((int3)((uint)param_3 >> 8),1));
  return;
}

