#ifndef MLIR_CONVERSION_DBTOARROWSTD_REGISTEREDFUNCTIONS_H
#define MLIR_CONVERSION_DBTOARROWSTD_REGISTEREDFUNCTIONS_H

#define FUNC_LIST(F, OPERANDS, RETURNS)                                                                                                                                               \
   F(ExecutionContextGetTable, get_table, OPERANDS(POINTER_TYPE, STRING_TYPE), RETURNS(POINTER_TYPE))                                                                                 \
   F(TableGetColumnId, get_column_id, OPERANDS(POINTER_TYPE, STRING_TYPE), RETURNS(INDEX_TYPE))                                                                                       \
   F(DumpInt, dump_int, OPERANDS(BOOL_TYPE, INT_TYPE(64)), RETURNS())                                                                                                                 \
   F(DumpUInt, dump_uint, OPERANDS(BOOL_TYPE, INT_TYPE(64)), RETURNS())                                                                                                               \
   F(DumpBool, dump_bool, OPERANDS(BOOL_TYPE, BOOL_TYPE), RETURNS())                                                                                                                  \
   F(DumpDecimal, dump_decimal, OPERANDS(BOOL_TYPE, INT_TYPE(64), INT_TYPE(64), INT_TYPE(32)), RETURNS())                                                                             \
   F(DumpDateDay, dump_date_day, OPERANDS(BOOL_TYPE, INT_TYPE(32)), RETURNS())                                                                                                        \
   F(DumpDateMillisecond, dump_date_millisecond, OPERANDS(BOOL_TYPE, INT_TYPE(64)), RETURNS())                                                                                        \
   F(DumpTimestampSecond, dump_timestamp_second, OPERANDS(BOOL_TYPE, INT_TYPE(64)), RETURNS())                                                                                        \
   F(DumpTimestampMillisecond, dump_timestamp_millisecond, OPERANDS(BOOL_TYPE, INT_TYPE(64)), RETURNS())                                                                              \
   F(DumpTimestampMicrosecond, dump_timestamp_microsecond, OPERANDS(BOOL_TYPE, INT_TYPE(64)), RETURNS())                                                                              \
   F(DumpTimestampNanosecond, dump_timestamp_nanosecond, OPERANDS(BOOL_TYPE, INT_TYPE(64)), RETURNS())                                                                                \
   F(DumpIntervalMonths, dump_interval_months, OPERANDS(BOOL_TYPE, INT_TYPE(32)), RETURNS())                                                                                          \
   F(DumpIntervalDayTime, dump_interval_daytime, OPERANDS(BOOL_TYPE, INT_TYPE(64)), RETURNS())                                                                                        \
   F(DumpFloat, dump_float, OPERANDS(BOOL_TYPE, DOUBLE_TYPE), RETURNS())                                                                                                              \
   F(DumpString, dump_string, OPERANDS(BOOL_TYPE, STRING_TYPE), RETURNS())                                                                                                            \
   F(TableChunkIteratorInit, table_chunk_iterator_init, OPERANDS(POINTER_TYPE), RETURNS(POINTER_TYPE))                                                                                \
   F(TableChunkIteratorNext, table_chunk_iterator_next, OPERANDS(POINTER_TYPE), RETURNS(POINTER_TYPE))                                                                                \
   F(TableChunkIteratorCurr, table_chunk_iterator_curr, OPERANDS(POINTER_TYPE), RETURNS(POINTER_TYPE))                                                                                \
   F(TableChunkIteratorValid, table_chunk_iterator_valid, OPERANDS(POINTER_TYPE), RETURNS(BOOL_TYPE))                                                                                 \
   F(TableChunkIteratorFree, table_chunk_iterator_free, OPERANDS(POINTER_TYPE), RETURNS())                                                                                            \
   F(TableChunkNumRows, table_chunk_num_rows, OPERANDS(POINTER_TYPE), RETURNS(INDEX_TYPE))                                                                                            \
   F(TableChunkGetColumnBuffer, table_chunk_get_column_buffer, OPERANDS(POINTER_TYPE, INDEX_TYPE, INDEX_TYPE), RETURNS(STRING_TYPE))                                                  \
   F(TableChunkGetColumnOffset, table_chunk_get_column_offset, OPERANDS(POINTER_TYPE, INDEX_TYPE), RETURNS(INDEX_TYPE))                                                               \
   F(ArrowGetType2Param, arrow_type2, OPERANDS(INT_TYPE(32), INT_TYPE(32), INT_TYPE(32)), RETURNS(POINTER_TYPE))                                                                      \
   F(ArrowGetType1Param, arrow_type1, OPERANDS(INT_TYPE(32), INT_TYPE(32)), RETURNS(POINTER_TYPE))                                                                                    \
   F(ArrowGetType, arrow_type, OPERANDS(INT_TYPE(32)), RETURNS(POINTER_TYPE))                                                                                                         \
   F(ArrowTableSchemaCreate, arrow_schema_create_builder, OPERANDS(), RETURNS(POINTER_TYPE))                                                                                          \
   F(ArrowTableSchemaAddField, arrow_schema_add_field, OPERANDS(POINTER_TYPE, POINTER_TYPE, BOOL_TYPE, STRING_TYPE), RETURNS())                                                       \
   F(ArrowTableSchemaBuild, arrow_schema_build, OPERANDS(POINTER_TYPE), RETURNS(POINTER_TYPE))                                                                                        \
   F(ArrowTableBuilderCreate, arrow_create_table_builder, OPERANDS(POINTER_TYPE), RETURNS(POINTER_TYPE))                                                                              \
   F(ArrowTableBuilderAddInt8, table_builder_add_int_8, OPERANDS(POINTER_TYPE, INT_TYPE(32), BOOL_TYPE, INT_TYPE(8)), RETURNS())                                                      \
   F(ArrowTableBuilderAddInt16, table_builder_add_int_16, OPERANDS(POINTER_TYPE, INT_TYPE(32), BOOL_TYPE, INT_TYPE(16)), RETURNS())                                                   \
   F(ArrowTableBuilderAddInt32, table_builder_add_int_32, OPERANDS(POINTER_TYPE, INT_TYPE(32), BOOL_TYPE, INT_TYPE(32)), RETURNS())                                                   \
   F(ArrowTableBuilderAddInt64, table_builder_add_int_64, OPERANDS(POINTER_TYPE, INT_TYPE(32), BOOL_TYPE, INT_TYPE(64)), RETURNS())                                                   \
   F(ArrowTableBuilderAddDecimal, table_builder_add_decimal, OPERANDS(POINTER_TYPE, INT_TYPE(32), BOOL_TYPE, INT_TYPE(128)), RETURNS())                                               \
   F(ArrowTableBuilderAddDate32, table_builder_add_date_32, OPERANDS(POINTER_TYPE, INT_TYPE(32), BOOL_TYPE, INT_TYPE(32)), RETURNS())                                                 \
   F(ArrowTableBuilderAddDate64, table_builder_add_date_64, OPERANDS(POINTER_TYPE, INT_TYPE(32), BOOL_TYPE, INT_TYPE(64)), RETURNS())                                                 \
   F(ArrowTableBuilderAddFloat32, table_builder_add_float_32, OPERANDS(POINTER_TYPE, INT_TYPE(32), BOOL_TYPE, FLOAT_TYPE), RETURNS())                                                 \
   F(ArrowTableBuilderAddFloat64, table_builder_add_float_64, OPERANDS(POINTER_TYPE, INT_TYPE(32), BOOL_TYPE, DOUBLE_TYPE), RETURNS())                                                \
   F(ArrowTableBuilderAddBool, table_builder_add_bool, OPERANDS(POINTER_TYPE, INT_TYPE(32), BOOL_TYPE, BOOL_TYPE), RETURNS())                                                         \
   F(ArrowTableBuilderAddBinary, table_builder_add_binary, OPERANDS(POINTER_TYPE, INT_TYPE(32), BOOL_TYPE, STRING_TYPE), RETURNS())                                                   \
   F(ArrowTableBuilderFinishRow, table_builder_finish_row, OPERANDS(POINTER_TYPE), RETURNS())                                                                                         \
   F(ArrowTableBuilderBuild, table_builder_build, OPERANDS(POINTER_TYPE), RETURNS(POINTER_TYPE))                                                                                      \
   F(CmpStringEQ, cmp_string_eq, OPERANDS(BOOL_TYPE, STRING_TYPE, STRING_TYPE), RETURNS(BOOL_TYPE))                                                                                   \
   F(CmpStringNEQ, cmp_string_neq, OPERANDS(BOOL_TYPE, STRING_TYPE, STRING_TYPE), RETURNS(BOOL_TYPE))                                                                                 \
   F(CmpStringLT, cmp_string_lt, OPERANDS(BOOL_TYPE, STRING_TYPE, STRING_TYPE), RETURNS(BOOL_TYPE))                                                                                   \
   F(CmpStringLTE, cmp_string_lte, OPERANDS(BOOL_TYPE, STRING_TYPE, STRING_TYPE), RETURNS(BOOL_TYPE))                                                                                 \
   F(CmpStringGT, cmp_string_gt, OPERANDS(BOOL_TYPE, STRING_TYPE, STRING_TYPE), RETURNS(BOOL_TYPE))                                                                                   \
   F(CmpStringGTE, cmp_string_gte, OPERANDS(BOOL_TYPE, STRING_TYPE, STRING_TYPE), RETURNS(BOOL_TYPE))                                                                                 \
   F(CmpStringLike, cmp_string_like, OPERANDS(BOOL_TYPE, STRING_TYPE, STRING_TYPE), RETURNS(BOOL_TYPE))                                                                               \
   F(CastStringToInt64, cast_string_int, OPERANDS(BOOL_TYPE, STRING_TYPE), RETURNS(INT_TYPE(64)))                                                                                     \
   F(CastStringToFloat32, cast_string_float32, OPERANDS(BOOL_TYPE, STRING_TYPE), RETURNS(FLOAT_TYPE))                                                                                 \
   F(CastStringToFloat64, cast_string_float64, OPERANDS(BOOL_TYPE, STRING_TYPE), RETURNS(DOUBLE_TYPE))                                                                                \
   F(CastStringToDecimal, cast_string_decimal, OPERANDS(BOOL_TYPE, STRING_TYPE, INT_TYPE(32)), RETURNS(INT_TYPE(128)))                                                                \
   F(CastInt64ToString, cast_int_string, OPERANDS(BOOL_TYPE, INT_TYPE(64)), RETURNS(STRING_TYPE))                                                                                     \
   F(CastFloat32ToString, cast_float32_string, OPERANDS(BOOL_TYPE, FLOAT_TYPE), RETURNS(STRING_TYPE))                                                                                 \
   F(CastFloat64ToString, cast_float64_string, OPERANDS(BOOL_TYPE, DOUBLE_TYPE), RETURNS(STRING_TYPE))                                                                                \
   F(CastDecimalToString, cast_decimal_string, OPERANDS(BOOL_TYPE, INT_TYPE(128), INT_TYPE(32)), RETURNS(STRING_TYPE))                                                                \
   F(VectorBuilderCreate, vector_builder_create, OPERANDS(), RETURNS(POINTER_TYPE))                                                                                                   \
   F(VectorBuilderAddVarLen, vector_builder_add_var_len, OPERANDS(POINTER_TYPE, STRING_TYPE), RETURNS(TUPLE_TYPE(INT_TYPE(64), INT_TYPE(64))))                                        \
   F(VectorBuilderAddNullableVarLen, vector_builder_add_nullable_var_len, OPERANDS(POINTER_TYPE, BOOL_TYPE, STRING_TYPE), RETURNS(TUPLE_TYPE(BOOL_TYPE, INT_TYPE(64), INT_TYPE(64)))) \
   F(VectorBuilderMerge, vector_builder_merge, OPERANDS(POINTER_TYPE, INDEX_TYPE), RETURNS(POINTER_TYPE))                                                                             \
   F(VectorBuilderBuild, vector_builder_build, OPERANDS(POINTER_TYPE), RETURNS(TUPLE_TYPE(STRING_TYPE, STRING_TYPE)))                                                                 \
   F(SortVector, sort, OPERANDS(POINTER_TYPE,INDEX_TYPE,FUNCTION_TYPE(OPERANDS(STRING_TYPE,POINTER_TYPE,POINTER_TYPE),RETURNS(BOOL_TYPE)),POINTER_TYPE), RETURNS())

#define PLAIN_FUNC_LIST(F, OPERANDS, RETURNS)                                                                        \
   F(TimestampAddMonth, timestampaddMonth_int32_date64, OPERANDS(INT_TYPE(32), INT_TYPE(64)), RETURNS(INT_TYPE(64))) \
   F(DateExtractMillenium, extractMillenium_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                   \
   F(DateExtractCentury, extractCentury_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                       \
   F(DateExtractDecade, extractDecade_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                         \
   F(DateExtractYear, extractYear_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                             \
   F(DateExtractQuarter, extractQuarter_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                       \
   F(DateExtractDoy, extractDoy_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                               \
   F(DateExtractMonth, extractMonth_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                           \
   F(DateExtractDay, extractDay_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                               \
   F(DateExtractWeek, extractWeek_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                             \
   F(DateExtractDow, extractDow_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                               \
   F(DateExtractHour, extractHour_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                             \
   F(DateExtractMinute, extractMinute_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))                         \
   F(DateExtractSecond, extractSecond_date64, OPERANDS(INT_TYPE(64)), RETURNS(INT_TYPE(64)))

#endif // MLIR_CONVERSION_DBTOARROWSTD_REGISTEREDFUNCTIONS_H